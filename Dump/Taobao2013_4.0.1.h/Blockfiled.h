//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBase.h"

@class UIImageView, UIScrollView;

@interface Blockfiled : UIBase
{
    UIImageView *imageView;
    UIScrollView *_scrollView;
    BOOL bScroll;
    BOOL bHeight;
    int _height;
    struct CGSize _size;
    struct CGSize _contentSize;
}

@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (struct CGSize)calcSize;
- (void)layoutSubviews;
- (id)init:(struct CGSize)arg1 withModel:(id)arg2;

@end
