//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBChatHeadView.h"

@class NSString, NSURL, TBChatUnreadCountLabel, UIImage, UIImageView, UIView;

@interface TBChatAvatarView : TBChatHeadView
{
    BOOL _hasShadow;
    NSURL *_imageURL;
    int _unreadCountLabelPosition;
    UIImageView *_imageView;
    UIView *_shadowView;
    TBChatUnreadCountLabel *_unreadCountLabel;
}

@property(retain, nonatomic) TBChatUnreadCountLabel *unreadCountLabel; // @synthesize unreadCountLabel=_unreadCountLabel;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) int unreadCountLabelPosition; // @synthesize unreadCountLabelPosition=_unreadCountLabelPosition;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (BOOL)hasShownUnreadCountLabel;
- (void)setUnreadCount:(unsigned int)arg1;
@property(retain, nonatomic) NSString *unreadCountText;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (void)_initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)configureViewWithSession:(id)arg1;

@end
