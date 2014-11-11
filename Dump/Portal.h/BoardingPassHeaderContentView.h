/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "ALPBasePassHeaderContentView.h"

@class NSArray;

@interface BoardingPassHeaderContentView : ALPBasePassHeaderContentView {
	NSArray* _fields;
	BOOL _showHeadField;
}
@property(assign, nonatomic) BOOL showHeadField;
-(void).cxx_destruct;
-(void)reloadDataFromPassInfo:(id)passInfo;
-(void)reloadDataFromPassBaseInfo:(id)passBaseInfo;
-(void)reloadData:(id)data;
-(void)setupLogoFieldViewProperties;
-(void)resetLogoFieldView:(id)view;
-(void)layoutSubviews;
-(void)commonInit:(CGRect)init;
@end

