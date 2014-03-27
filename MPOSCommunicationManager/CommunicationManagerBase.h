//
//  CommunicationManagerBase.h
//  BLEBaseDriver
//
//  Created by Landi 联迪 - Robert on 13-8-27.
//  Copyright (c) 2013年 Landi 联迪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DeviceSearchListener.h"
#import "CommunicationCallBack.h"
#import "CommDownloadCallback.h"
#import "DeviceInfo.h"

typedef enum _enumDeviceCommunicationMode{
    MASTERSLAVE,
    DUPLEX,
}DeviceCommunicationMode;

@interface CommunicationManagerBase : NSObject

+(CommunicationManagerBase*)sharedInstance:(DeviceCommunicationChannel)channel;
+(int)searchDevices:(id<DeviceSearchListener>)dsl detectAudioDevice:(BOOL)detectAudioDevcie detectBluetooth:(BOOL)detectBluetoothDevice timeout:(long)timeout;
+(void)stopSearching;
+(NSString*)getLibVersion;
+(void)switchLog:(BOOL)bOpen;
-(int)openDevice:(NSString*)identifier;
-(int)openDevice:(NSString *)identifier cb:(id<CommunicationCallBack>) cb mode:(DeviceCommunicationMode)mode;
-(int)exchangeData:(NSData*)data timeout:(long)timeout cb:(id<CommunicationCallBack>) cb;
-(int)exchangeData:(NSData *)data timeout:(long)timeout;
-(int)cancelExchange;
-(void)closeDevice;
-(void)closeResource;
-(BOOL)isConnected;
-(void)download:(NSString*)identifier path:(NSString*)filePath callback:(id<CommDownloadCallback>)cb;

@end
