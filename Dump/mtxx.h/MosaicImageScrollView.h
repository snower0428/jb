//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "MosaicSaveDataSource.h"
#import "UIScrollViewDelegate.h"

@class MagnifierGlassView, MosaicDrawView, MosaicPenView, UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MosaicImageScrollView : UIScrollView <UIScrollViewDelegate, MosaicSaveDataSource>
{
    MagnifierGlassView *magnifierView;
    MosaicPenView *mosaicPenView_;
    MosaicDrawView *drawView_;
    struct CGSize realImageSize_;
    float scale_;
    CDUnknownBlockType saveBlock;
    BOOL _isClear;
    UIImage *image;
    UIImageView *_imageView;
    id _scrollDelegate;
    float _penWidth;
    UIColor *_penColor;
    id <MosaicImageScrollViewTouchDelegate> _touchDelegate;
}

@property(nonatomic) BOOL isClear; // @synthesize isClear=_isClear;
@property(nonatomic) __weak id <MosaicImageScrollViewTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(retain, nonatomic) UIColor *penColor; // @synthesize penColor=_penColor;
@property(nonatomic) float penWidth; // @synthesize penWidth=_penWidth;
@property(nonatomic) __weak id scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)saveRaelImageFinished:(id)arg1;
@property(readonly, nonatomic) BOOL isEdit;
- (void)saveMosaicRealImage:(id)arg1 with:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)computerMagnifier;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initState;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

