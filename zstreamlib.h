//
//  zstreamlib.h
//  zstreamlib
//
//  Created by zstreamlib on 7/10/04.
//  Copyright (c) 2004 user1. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <zlib.h>


@protocol zstreamlibDelegate
@optional
-(void)zstreamlibDataCompressed:(NSData*)oData;
-(void)zstreamlibDataUncompressed:(NSData*)oData;

@end


@interface zstreamlib : NSObject{
}
@property(nonatomic,weak)id delegate;

+(zstreamlib*)share;
-(void)initZq:(id)Delegate;
- (void)ReleaseZq;
-(void) enable_compress:(BOOL)enable;
-(void)zlibq_compress:(NSData *)inData;
-(void)zlibq_uncompress:(NSData *)inData;

@end