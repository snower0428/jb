/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CreditScanView : XXUnknownSuperclass {
@private
	BOOL _bTop;
	BOOL _bBottom;
	BOOL _bLeft;
	BOOL _bRight;
	int _imageWidth;
	int _imageHeight;
	CGPoint _centerPoint;
	CGRect _scanRect;
}
@property(assign, nonatomic) int imageHeight;
@property(assign, nonatomic) int imageWidth;
@property(assign, nonatomic) CGPoint centerPoint;
@property(assign, nonatomic) CGRect scanRect;
@property(assign, nonatomic) BOOL bRight;
@property(assign, nonatomic) BOOL bLeft;
@property(assign, nonatomic) BOOL bBottom;
@property(assign, nonatomic) BOOL bTop;
-(void)drawRect:(CGRect)rect;
-(void)reDraw;
-(void)clearRect;
-(id)createLabel:(id)label frame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
@end

