//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TableBase : NSObject
{
}

+ (void)ImageProcessWithMosaic:(char *)arg1 width:(int)arg2 height:(int)arg3 block:(int)arg4;
+ (void)ImageProcessWithAlphaMix:(char *)arg1 width:(int)arg2 height:(int)arg3 mixData:(char *)arg4 mask:(char *)arg5 values:(float *)arg6;
+ (void)ImageProcessWithGaussBlur:(char *)arg1 width:(int)arg2 height:(int)arg3 radius:(int)arg4;
+ (void)ImageProcessWithSharp:(char *)arg1 width:(int)arg2 height:(int)arg3 depth:(float)arg4;
+ (void)ImageProcessWithSharp:(char *)arg1 width:(int)arg2 height:(int)arg3 depth:(float)arg4 gaussData:(char **)arg5;
+ (void)ImageProcessWithColorMixing:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3 withValues:(float *)arg4 valueCount:(int)arg5;

@end
