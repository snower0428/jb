/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"

@class UIView, UIControl, NSTimer, CeleFoldViews, UIButton, UIImage;
@protocol FoldPaneDelegate;

@interface CeleFoldPane : XXUnknownSuperclass {
	UIImage* _image;
	UIImage* _image_;
	NSTimer* _timer;
	CeleFoldViews* _foldView;
	UIControl* _touchMask;
	UIView* _contentView;
	UIButton* _foldButton;
	UIView* _foldIndicator;
	BOOL _open;
	id<FoldPaneDelegate> _delegate;
}
@property(assign, nonatomic) id<FoldPaneDelegate> delegate;
@property(retain, nonatomic) UIView* foldIndicator;
@property(readonly, assign, nonatomic) UIButton* foldButton;
@property(readonly, assign, nonatomic) BOOL open;
-(void)setFrame:(CGRect)frame;
-(void)panPane:(id)pane;
-(void)togglePane:(id)pane;
-(void)touchMaskClicked:(id)clicked;
-(void)autoFold:(id)fold;
-(void)foldEnded:(BOOL)ended;
-(void)foldBegan;
-(void)dealloc;
-(void)removeFoldView;
-(id)initWithContentView:(id)contentView buttonImage:(id)image buttonImage_:(id)image_;
@end

