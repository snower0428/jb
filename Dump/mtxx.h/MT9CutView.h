//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MTImageScrollViewMoveAnimationDelegate.h"

@class MTImageScrollView, UIImageView;

__attribute__((visibility("hidden")))
@interface MT9CutView : UIView <MTImageScrollViewMoveAnimationDelegate>
{
    MTImageScrollView *_imageScrollView;
    UIImageView *_coverImageView;
    id <MT9CutViewDelegate> _delegate;
}

@property(nonatomic) id <MT9CutViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchEndAndNotMove;
- (void)moveAnimationFinished;
- (void)touchImageWillMoveOrScale;
- (id)finalImageWithDimension:(float)arg1;
- (id)tilingImageIntoNine;
- (struct CGRect)imageShowRect;
- (void)setCoverImage:(id)arg1;
- (void)refreshImage:(id)arg1;
- (id)filterImage;
- (void)setImage:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;

@end
