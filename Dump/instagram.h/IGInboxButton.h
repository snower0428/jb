//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class IGUnreadBubbleView, UIView;

@interface IGInboxButton : UIButton
{
    int _unreadCount;
    IGUnreadBubbleView *_unreadBubbleView;
    UIView *_bubbleBackground;
}

+ (id)button;
@property(retain, nonatomic) UIView *bubbleBackground; // @synthesize bubbleBackground=_bubbleBackground;
@property(retain, nonatomic) IGUnreadBubbleView *unreadBubbleView; // @synthesize unreadBubbleView=_unreadBubbleView;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (void)layoutCountLabel;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateCountLabel:(id)arg1;
- (void)dealloc;

@end
