//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, CAShapeLayer, UIBezierPath, UIImage, UIRotationGestureRecognizer;

__attribute__((visibility("hidden")))
@interface MTPuzzlePatternImageView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _dragging;
    BOOL _moveOutFlag;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_borderLayer;
    float _rotationScale;
    float _rotationDirection;
    float minScale;
    float maxScale;
    BOOL _rotation90Flag;
    UIRotationGestureRecognizer *_rotationGesture;
    BOOL _bounces;
    BOOL _showBorder;
    BOOL _gestureRotation;
    id <IrregularViewDelegate> _delegate;
    CALayer *_imageLayer;
    UIBezierPath *_path;
    UIImage *_image;
    float _minimumZoomScale;
    float _maximumZoomScale;
    int _index;
    struct CGRect _originalFrame;
}

@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) float maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) float minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) BOOL rotation90Flag; // @synthesize rotation90Flag=_rotation90Flag;
@property(nonatomic) BOOL gestureRotation; // @synthesize gestureRotation=_gestureRotation;
@property(nonatomic) BOOL showBorder; // @synthesize showBorder=_showBorder;
@property(nonatomic) BOOL bounces; // @synthesize bounces=_bounces;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(readonly, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) __weak id <IrregularViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UIImage *resultImage;
- (void)handleRotation:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleTap:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)adjustAnchorPointForGestureRecognizer:(id)arg1;
- (void)bouncesZoomAndScroll;
- (void)flipVertical;
- (void)flipHorizontal;
- (void)rotationByClockwise;
- (void)calculateMinMaxZoomScale;
- (void)insertImageLayerBelowBorderLayer;
- (struct CGRect)getViewSuitableRectWithSize:(struct CGSize)arg1;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 withImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
