//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface TBDetailHybridView : UIView
{
    BOOL _needPopUp;
    float _startX;
    float _startY;
    float _lineHeight;
    NSMutableArray *_data;
}

+ (struct CGSize)getImageSize:(id)arg1;
@property(nonatomic) BOOL needPopUp; // @synthesize needPopUp=_needPopUp;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) float startY; // @synthesize startY=_startY;
@property(nonatomic) float startX; // @synthesize startX=_startX;
- (void).cxx_destruct;
- (void)setText:(id)arg1 Style:(id)arg2;
- (void)buildView;
- (void)checkOrgin;

@end
