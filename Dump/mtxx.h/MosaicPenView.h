//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface MosaicPenView : UIView
{
    UIColor *_fillColor;
    UIColor *_edgeColor;
    float _radius;
    float _edgeWidth;
}

@property(nonatomic) float edgeWidth; // @synthesize edgeWidth=_edgeWidth;
@property(retain, nonatomic) UIColor *edgeColor; // @synthesize edgeColor=_edgeColor;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
