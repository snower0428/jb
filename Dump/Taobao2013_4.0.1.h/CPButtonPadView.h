//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray, UIImage;

@interface CPButtonPadView : UIView
{
    int _numberOfCount;
    int _style;
    NSMutableArray *_buttons;
    id <CPButtonPadViewDatasource> _datasource;
    id <CPButtonPadViewDelegate> _delegate;
    UIImage *_seplineImage;
    NSDictionary *_btnItemOption;
    float _margin;
}

@property(nonatomic) float margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSDictionary *btnItemOption; // @synthesize btnItemOption=_btnItemOption;
@property(retain, nonatomic) UIImage *seplineImage; // @synthesize seplineImage=_seplineImage;
@property(nonatomic) id <CPButtonPadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <CPButtonPadViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int numberOfCount; // @synthesize numberOfCount=_numberOfCount;
- (void).cxx_destruct;
- (void)btnItemClicked:(id)arg1;
- (id)itemAtIndex:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)initWithDataSource;
- (void)loadDefaultValue;
- (id)initWithFrame:(struct CGRect)arg1;

@end

