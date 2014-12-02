//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, UIColor;

@interface TTCSSTextShadowModel : NSObject
{
    UIColor *shadowColor;
    NSNumber *shadowBlur;
    struct CGSize shadowOffset;
}

+ (id)initWithShadowColor:(id)arg1 andShadowOffset:(struct CGSize)arg2 andShadowBlur:(id)arg3;
+ (id)initWithShadowColor:(id)arg1 andShadowOffset:(struct CGSize)arg2;
@property(copy) NSNumber *shadowBlur; // @synthesize shadowBlur;
@property(retain) id shadowColor; // @synthesize shadowColor;
@property struct CGSize shadowOffset; // @synthesize shadowOffset;
- (void)dealloc;
- (id)init;

@end

