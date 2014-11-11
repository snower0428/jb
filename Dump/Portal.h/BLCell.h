/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, UIActivityIndicatorView, UIImageView, UILabel, NSIndexPath, UIButton, StyledTableViewCellBackgroundView;

@interface BLCell : XXUnknownSuperclass {
	NSIndexPath* indexPath;
@private
	BOOL separatorLine;
	BOOL hideUnderLine;
	BOOL isRedrawSelectedBackgroundView;
	UIActivityIndicatorView* acitvityIv;
	NSDictionary* data;
	StyledTableViewCellBackgroundView* styleBackgroundView;
	UILabel* ivLabel;
	UIButton* touchButton;
	UIImageView* lineImageView;
	int paintOffsetx;
	int paintOffsetWidth;
	int _dashWidth;
	int _dashGap;
	int _dashStroke;
	int _styledTableViewCellSelectionStyle;
}
@property(retain, nonatomic) UIImageView* lineImageView;
@property(retain, nonatomic) UIButton* touchButton;
@property(retain, nonatomic) UILabel* ivLabel;
@property(retain, nonatomic) StyledTableViewCellBackgroundView* styleBackgroundView;
@property(retain, nonatomic) UIActivityIndicatorView* acitvityIv;
@property(retain, nonatomic) NSDictionary* data;
@property(assign, nonatomic, setter=setStyledTableViewCellSelectionStyle:) int styledTableViewCellSelectionStyle;
@property(assign, nonatomic) int paintOffsetWidth;
@property(assign, nonatomic) int paintOffsetx;
@property(assign, nonatomic) BOOL isRedrawSelectedBackgroundView;
@property(retain, nonatomic) NSIndexPath* indexPath;
@property(assign, nonatomic) BOOL hideUnderLine;
@property(assign, nonatomic) BOOL separatorLine;
@property(assign, nonatomic) int dashStroke;
@property(assign, nonatomic) int dashGap;
@property(assign, nonatomic) int dashWidth;
-(void).cxx_destruct;
-(void)touchButtOnClick:(id)click;
-(void)detachMoreDataButton;
-(void)attachMoreDataButton;
-(void)stopActivityIndicatorView;
-(void)startActivityIndicatorView;
-(void)onLayout;
-(void)configData;
-(void)releaseUI;
-(void)initUI;
-(void)setDashWidth:(int)width dashGap:(int)gap dashStroke:(int)stroke;
-(void)setSeparatorColor:(id)color;
-(void)setSelectionGradientDirection:(int)direction;
-(void)setSelectedBackgroundViewGradientColors:(id)colors;
-(void)shadowEffect:(id)effect;
-(void)layoutSubviews;
-(id)currentView;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

