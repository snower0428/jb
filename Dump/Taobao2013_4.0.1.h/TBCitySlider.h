//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class UIImageView, UILabel;

@interface TBCitySlider : UISlider
{
    UILabel *_valueLabel;
    UILabel *_valueLabelBig;
    UIImageView *_imageView;
    id _sliderDelegate;
}

@property(nonatomic) id sliderDelegate; // @synthesize sliderDelegate=_sliderDelegate;
- (void).cxx_destruct;
- (void)valuechanged:(id)arg1;
- (void)setValue:(float)arg1;
- (void)touchEnd:(id)arg1;
- (void)touchBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
