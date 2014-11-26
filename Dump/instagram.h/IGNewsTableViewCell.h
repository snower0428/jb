//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "IGCoreTextLinkHandler.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "IGTappableImageViewDelegate.h"

@class IGCoreTextView, IGFollowButton, IGNewsStory, IGProfilePictureImageView, IGUnreadBubbleView, NSMutableArray, NSString, UIImageView, UIView;

@interface IGNewsTableViewCell : UITableViewCell <IGProfilePictureImageViewDelegate, IGCoreTextLinkHandler, IGTappableImageViewDelegate>
{
    UIView *_hairlineView;
    IGProfilePictureImageView *_profilePictureView;
    IGCoreTextView *_textView;
    NSMutableArray *_imageViews;
    IGFollowButton *_followButton;
    IGUnreadBubbleView *_requestCountBubbleView;
    UIImageView *_chevronView;
    BOOL _hidesCellDivider;
    IGNewsStory *_story;
    id <IGNewsTableViewCellDelegate> _delegate;
}

+ (float)heightForStory:(id)arg1 cellWidth:(float)arg2;
@property(nonatomic) __weak id <IGNewsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL hidesCellDivider; // @synthesize hidesCellDivider=_hidesCellDivider;
@property(retain, nonatomic) IGNewsStory *story; // @synthesize story=_story;
- (void).cxx_destruct;
- (void)imageViewTapped:(id)arg1;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)profilePictureTapped:(id)arg1;
- (void)setMedia:(id)arg1;
- (void)createImageViews:(int)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)applyHighlight:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
