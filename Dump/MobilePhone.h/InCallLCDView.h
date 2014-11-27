//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPLCDView.h"

@class NSString, NSTimer, TPLCDTextView, UIButton, UIView;

@interface InCallLCDView : TPLCDView
{
    TPLCDTextView *_labelView2;
    TPLCDTextView *_textView2;
    UIView *_activeIndicator;
    int _activePosition;
    int _conferencePosition;
    TPLCDTextView *_oldLabelView;
    TPLCDTextView *_oldLabelView2;
    TPLCDTextView *_oldTextView;
    TPLCDTextView *_oldTextView2;
    UIView *_oldActiveIndicator;
    UIButton *_conferenceButton;
    NSTimer *_alternatingTimer;
    NSString *_originalLabel;
    NSString *_originalLabel2;
    NSString *_alternateLabel;
    NSString *_alternateLabel2;
    id _delegate;
    unsigned int _ignoreLayout:1;
    unsigned int _animating:1;
    unsigned int _progress:1;
    unsigned int _dimmedText:2;
    unsigned int _canTruncateLabel:2;
    unsigned int _enableFade:1;
    unsigned int _changingForAlternate:1;
    _Bool _callerIsAmbiguous;
}

@property(nonatomic) _Bool callerIsAmbiguous; // @synthesize callerIsAmbiguous=_callerIsAmbiguous;
- (void)_alternate:(id)arg1;
- (void)_stopAlternating;
- (void)_startAlternating;
- (void)animateLabel;
- (void)popText;
- (void)animateCallMergeWithDuration:(float)arg1;
- (int)conferencePosition;
- (void)setConferencePosition:(int)arg1;
- (void)_conferenceButtonClicked:(id)arg1;
- (void)_positionConferenceButton;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setActiveIndicatorShowsProgress:(_Bool)arg1;
- (void)animateToActivePosition:(int)arg1 label:(id)arg2 label2:(id)arg3;
- (void)setActivePosition:(int)arg1;
- (void)_updateForActivePosition;
- (void)_removeAnimationViews;
- (void)_positionActiveCallIndicator;
- (void)setSubImage:(id)arg1;
- (id)originalLabel2;
- (void)setAlternateLabel2:(id)arg1;
- (id)originalLabel;
- (void)setAlternateLabel:(id)arg1;
- (void)setCanTruncateLabel2:(_Bool)arg1;
- (id)label2;
- (void)setLabel2:(id)arg1;
- (void)setLabel2:(id)arg1 alternateLabel:(id)arg2;
- (id)text2;
- (void)setText2:(id)arg1 animating:(_Bool)arg2;
- (void)setText2Dimmed:(_Bool)arg1;
- (void)setText2:(id)arg1;
- (void)setCanTruncateLabel:(_Bool)arg1;
- (void)setLabelVisible:(_Bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabel:(id)arg1 alternateLabel:(id)arg2;
- (void)setTextDimmed:(_Bool)arg1;
- (void)setText:(id)arg1 animating:(_Bool)arg2;
- (void)setText:(id)arg1;
- (void)setTextChangeFadingEnabled:(_Bool)arg1;
- (void)setTextScrolls:(_Bool)arg1;
- (void)lcdTextViewCompletedScroll:(id)arg1;
- (void)performTextFadeWithDuration:(float)arg1 delay:(float)arg2 forView:(id *)arg3 newText:(id)arg4 setter:(SEL)arg5 position:(int)arg6;
- (void)_enableScrollingForTextView:(id)arg1 start:(_Bool)arg2;
- (void)_cancelScrollingForTextView:(id)arg1;
- (void)_updateTextAttributes;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end

