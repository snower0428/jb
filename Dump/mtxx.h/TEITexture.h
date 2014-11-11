//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TEITexture : NSObject
{
    unsigned int m_name;
    unsigned int m_location;
    unsigned int m_width;
    unsigned int m_height;
}

+ (id)textureWithCVImage:(struct __CVBuffer *)arg1;
+ (id)textureWithData:(char *)arg1:(int)arg2:(int)arg3;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithOralImage:(id)arg1 withMaxLen:(int)arg2;
@property(nonatomic) unsigned int height; // @synthesize height=m_height;
@property(nonatomic) unsigned int width; // @synthesize width=m_width;
@property(nonatomic) unsigned int location; // @synthesize location=m_location;
@property(nonatomic) unsigned int name; // @synthesize name=m_name;
- (void)resetCameraImage:(id)arg1 withMaxLen:(int)arg2;
- (void)resetCameraImage:(id)arg1;
- (void)resetCameraImageBuffer:(struct __CVBuffer *)arg1;
- (id)initProcessCamera;
- (id)initWithCVImage:(struct __CVBuffer *)arg1;
- (id)initWithData:(char *)arg1:(int)arg2:(int)arg3;
- (id)initWithImage:(id)arg1;
- (id)initWithOralImage:(id)arg1 withMaxLen:(int)arg2;
- (void)dealloc;

@end

