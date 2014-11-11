//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIImage, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SimplePhotoView : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_downloadOperations;
    BOOL _scaleEnabled;
    BOOL _cropAndFit;
    BOOL _showShadow;
    NSString *_imageURL;
    float _fitScale;
    float _minScale;
    float _maxScale;
    UIImage *_image;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    id _touchDelegate;
}

@property(nonatomic) id touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) float maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) float minScale; // @synthesize minScale=_minScale;
@property(nonatomic) float fitScale; // @synthesize fitScale=_fitScale;
@property(nonatomic) BOOL showShadow; // @synthesize showShadow=_showShadow;
@property(nonatomic) BOOL cropAndFit; // @synthesize cropAndFit=_cropAndFit;
@property(nonatomic) BOOL scaleEnabled; // @synthesize scaleEnabled=_scaleEnabled;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (void)getOriginalPic:(id)arg1 andImage:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)handleDoubleTap;
- (void)handleSingleTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)resetScaleOfImage:(id)arg1;
- (void)replaceImg:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

