//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGImageViewDelegate.h"

@class IGImageView, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface IGClusterTileView : UIView <IGImageViewDelegate>
{
    UIImageView *_border;
    IGImageView *_imageView;
    IGImageView *_fullResolutionImageLoaderView;
    UIView *_imageHighlight;
    UIButton *_button;
    UIActivityIndicatorView *_spinner;
    NSString *_thumbnailUrl;
    NSString *_fullResolutionUrl;
    BOOL _thumbnailHasLoaded;
    BOOL _fullResolutionHasLoaded;
    BOOL _fullResolutionIsShowing;
    BOOL _showFullResolutionWhenDownloaded;
    BOOL _isRemoved;
    UILabel *_counterLabel;
    UIImageView *_counterBubble;
    id _item;
    struct CGPoint _previousCenter;
}

@property(nonatomic) BOOL isRemoved; // @synthesize isRemoved=_isRemoved;
@property(nonatomic) struct CGPoint previousCenter; // @synthesize previousCenter=_previousCenter;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(retain, nonatomic) UIImageView *counterBubble; // @synthesize counterBubble=_counterBubble;
@property(retain, nonatomic) UILabel *counterLabel; // @synthesize counterLabel=_counterLabel;
- (void).cxx_destruct;
- (id)imageHighlight;
- (void)hideSpinner;
- (void)showSpinner;
- (void)flashHighlight:(BOOL)arg1;
- (void)flashHighlightWithDuration:(float)arg1;
- (void)hideHighlightAfterAnimation;
- (void)showHighlight;
- (void)hideHighlight;
- (void)dealloc;
- (id)button;
- (void)setSize:(struct CGSize)arg1;
- (void)loadThumbnailUrl:(id)arg1;
- (void)loadThumbnailUrl:(id)arg1 fullResolutionUrl:(id)arg2 showFullResolutionWhenDownloaded:(BOOL)arg3;
- (void)imageViewLoadedImage:(id)arg1;
- (void)setCounter:(int)arg1 inEditMode:(BOOL)arg2;
- (void)cancelImageLoad:(BOOL)arg1;
- (void)loadFullResolution;
- (void)showFullResolutionImage;
- (void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
