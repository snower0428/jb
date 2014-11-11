//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface TouchScrollView : UIScrollView
{
    UIImageView *keyboardPressBg;
    UIImageView *keyboardPressTag;
    int preIndex;
    id <TouchScrollViewDelegate> _touchDelegate;
}

@property(nonatomic) __weak id <TouchScrollViewDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
