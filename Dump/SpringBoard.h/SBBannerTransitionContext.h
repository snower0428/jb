//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<SBUIBannerItemView>;

@interface SBBannerTransitionContext : NSObject
{
    UIView<SBUIBannerItemView> *_fromView;
    UIView<SBUIBannerItemView> *_toView;
    int dismissReason;
    int animation;
}

+ (id)contextFromView:(id)arg1 toView:(id)arg2;
@property(nonatomic) int animation; // @synthesize animation;
@property(nonatomic) int dismissReason; // @synthesize dismissReason;
@property(retain, nonatomic) UIView<SBUIBannerItemView> *toView; // @synthesize toView=_toView;
@property(retain, nonatomic) UIView<SBUIBannerItemView> *fromView; // @synthesize fromView=_fromView;
- (void)dealloc;

@end
