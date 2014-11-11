//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray;

@interface TBCitySkuMutiSelectControl : UIControl
{
    float prevWidth;
    BOOL boneButtonOneLine;
    unsigned int _numberOfSegments;
    NSMutableArray *_buttons;
    int _touchIndex;
}

@property(nonatomic) int touchIndex; // @synthesize touchIndex=_touchIndex;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(readonly) unsigned int numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setOneButtonOneLine:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forIndex:(unsigned int)arg2;
- (void)setSelectedIndex:(int)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)propButtonClicked:(id)arg1;
- (id)createButton:(id)arg1;
- (void)setItems:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

