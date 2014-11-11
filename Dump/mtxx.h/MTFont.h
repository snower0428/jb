//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MTFont : NSObject
{
    struct __CTFont *_ctFontRef;
    NSString *_fontName;
    NSString *_path;
    float _pointSize;
}

+ (void)releaseData;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)fontWithName:(id)arg1 size:(float)arg2 path:(id)arg3;
@property(nonatomic) float pointSize; // @synthesize pointSize=_pointSize;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
@property(readonly, nonatomic) float leading;
@property(readonly, nonatomic) struct __CTFont *ctFontRef;
- (struct CGFont *)cgFontRefWithPath:(id)arg1;
@property(readonly, nonatomic) struct CGFont *cgFontRef;
- (id)fontWithSize:(float)arg1;
- (void)dealloc;

@end

