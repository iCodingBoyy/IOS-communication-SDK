//
//  DeviceInfo.h
//  BLEBaseDriver
//
//  Created by Landi 联迪 on 13-8-28.
//  Copyright (c) 2013年 Landi 联迪. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum _enumDeviceCommunicationChannel{
    AUDIOJACK,
    BLUETOOTH,
}DeviceCommunicationChannel;

@interface DeviceInfo : NSObject

-(id)initWithName:(NSString*)name identifier:(NSString*)identifier channel:(DeviceCommunicationChannel)dcc;
-(NSString*)getName;
-(NSString*)getIdentifier;
-(DeviceCommunicationChannel)getDevChannel;

@end
