//
//  BTXDataPacket.h
//  BlueTeeth
//
//  Created by Youssef Boukenken on 8/2/14.
//  Copyright (c) 2014 sefbkn. All rights reserved.
//

#import "JSONModel.h"
#import <Foundation/Foundation.h>

@interface BTXPayload : JSONModel


// The type of packet received.
// Certain packets are not propogated through network
// Certain types are...
@property NSInteger t;
@property (strong, nonatomic) NSString* pid;

@property (strong, nonatomic) NSString* peer_id;
@property (strong, nonatomic) NSString* mesh_id;
@property (strong, nonatomic) NSDate* ts; // timestamp w/ timezone.
@property (strong, nonatomic) NSString* data; // data.... text message maybe

@end
