//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTMaterial.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MTFilterMaterial : MTMaterial
{
    unsigned int _effectIndex;
    NSString *_sliderCountNum;
    float _alpha;
}

@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(copy, nonatomic) NSString *sliderCountNum; // @synthesize sliderCountNum=_sliderCountNum;
@property(nonatomic) unsigned int effectIndex; // @synthesize effectIndex=_effectIndex;
- (void).cxx_destruct;
- (void)dealloc;

@end

