/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PredictScrollViewDelegate.h"
#import "Portal-Structs.h"
#import "FinaBaseController.h"

@class NSDictionary, CelePageControlScrollView;

@interface FinaProductController : FinaBaseController <PredictScrollViewDelegate> {
	NSDictionary* _product;
	CelePageControlScrollView* _topPane;
}
-(void)scrollView:(id)view scrollToPage:(unsigned)page;
-(id)scrollView:(id)view viewForPage:(unsigned)page inFrame:(CGRect)frame;
-(void)applyButtonClicked:(id)clicked;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithProduct:(id)product;
@end
