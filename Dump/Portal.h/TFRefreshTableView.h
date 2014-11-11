/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "ALPBaseTableView.h"

@class ODRefreshControl;

@interface TFRefreshTableView : ALPBaseTableView {
@private
	ODRefreshControl* _odRefreshControl;
}
@property(retain, nonatomic) ODRefreshControl* odRefreshControl;
-(void).cxx_destruct;
-(void)addODRefreshControlDropAction:(SEL)action Target:(id)target;
-(void)endRefreshing;
-(void)beginRefreshing;
-(void)createRefreshControl;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
@end

