/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

@interface AssetsSingleColumnView : XXUnknownSuperclass {
@private
	UILabel* _title;
	UILabel* _detail;
}
@property(retain, nonatomic) UILabel* detail;
@property(retain, nonatomic) UILabel* title;
-(void).cxx_destruct;
-(void)setDetailText:(id)text;
-(void)setTitleText:(id)text;
-(void)initRightLabel;
-(void)initLeftLabel;
-(void)initUI;
-(id)initWithFrame:(CGRect)frame;
@end

