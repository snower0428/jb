//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "IDMTapDetectingImageViewDelegate.h"
#import "IDMTapDetectingViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class DACircularProgressView, IDMCaptionView, IDMPhotoBrowser, IDMTapDetectingImageView, IDMTapDetectingView;

@interface IDMZoomingScrollView : UIScrollView <UIScrollViewDelegate, IDMTapDetectingImageViewDelegate, IDMTapDetectingViewDelegate>
{
    IDMPhotoBrowser *_photoBrowser;
    id <IDMPhoto> _photo;
    IDMCaptionView *_captionView;
    IDMTapDetectingView *_tapView;
    DACircularProgressView *_progressView;
    IDMTapDetectingImageView *_photoImageView;
}

@property(retain, nonatomic) IDMCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) id <IDMPhoto> photo; // @synthesize photo=_photo;
@property(nonatomic) __weak IDMPhotoBrowser *photoBrowser; // @synthesize photoBrowser=_photoBrowser;
@property(retain, nonatomic) IDMTapDetectingImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
- (void).cxx_destruct;
- (void)view:(id)arg1 doubleTapDetected:(id)arg2;
- (void)view:(id)arg1 singleTapDetected:(id)arg2;
- (void)imageView:(id)arg1 doubleTapDetected:(id)arg2;
- (void)imageView:(id)arg1 singleTapDetected:(id)arg2;
- (void)handleDoubleTap:(struct CGPoint)arg1;
- (void)handleSingleTap:(struct CGPoint)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)displayImageFailure;
- (void)setProgress:(float)arg1 forPhoto:(id)arg2;
- (void)displayImage;
- (void)prepareForReuse;
- (id)initWithPhotoBrowser:(id)arg1;

@end

