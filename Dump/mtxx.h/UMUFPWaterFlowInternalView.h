//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class UMUFPWaterFlowView;

@interface UMUFPWaterFlowInternalView : UIView <UIScrollViewDelegate>
{
    UMUFPWaterFlowView *_mWaterFlowView;
}

@property(nonatomic) UMUFPWaterFlowView *mWaterFlowView; // @synthesize mWaterFlowView=_mWaterFlowView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

