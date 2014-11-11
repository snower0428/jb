//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, WWMessage;

@interface TBMessageBubble : UIControl
{
    WWMessage *_wwMessage;
    UIImageView *_backgroundView;
    float _topInset;
    float _leftInset;
    float _bottomInset;
    float _rightInset;
    int _style;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) WWMessage *wwMessage; // @synthesize wwMessage=_wwMessage;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (void)dealloc;
- (id)_rightBubbleImage;
- (id)_leftBubbleImage;

@end
