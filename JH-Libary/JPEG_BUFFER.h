//
//  JPEG_BUFFER.h
//  JH_Libary
//
//  Created by AivenLau on 2017/9/11.
//  Copyright © 2017年 AivenLau. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JPEG_BUFFER : NSObject
{
@public
    uint8_t mInx[100];
}

@property(assign,nonatomic)uint8_t *buffer;
@property(assign,nonatomic)uint8_t   nCount;
@property(assign,nonatomic)uint16_t  nJpegInx;


-(void)Clear;
-(void)Release;

@end
