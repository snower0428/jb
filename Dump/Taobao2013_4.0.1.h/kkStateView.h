//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView;

@interface kkStateView : UIView
{
    UIImageView *_loadingView;
    NSMutableArray *_loadingImages;
    UIView *_backView;
    int _state;
    id <kkStateViewDelegate> _delegate;
}

+ (id)sharedInstAll;
+ (id)sharedInstSingle;
@property(nonatomic) id <kkStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)hideStateView;
- (void)showStateViewAll;
- (void)showStateViewSingleAtCenter:(struct CGPoint)arg1 withSuperView:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setState:(int)arg1 complited:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 backView:(BOOL)arg2;

@end

