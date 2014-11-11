/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, UIView;

@interface CSLinearLayoutItem : XXUnknownSuperclass {
@private
	UIView* _view;
	int _fillMode;
	int _horizontalAlignment;
	int _verticalAlignment;
	int _tag;
	NSDictionary* _userInfo;
	UIEdgeInsets _padding;
}
@property(assign, nonatomic) int tag;
@property(assign, nonatomic) NSDictionary* userInfo;
@property(assign, nonatomic) UIEdgeInsets padding;
@property(assign, nonatomic) int verticalAlignment;
@property(assign, nonatomic) int horizontalAlignment;
@property(assign, nonatomic) int fillMode;
@property(retain, nonatomic) UIView* view;
+(id)layoutItemForView:(id)view;
-(void)dealloc;
-(id)initWithView:(id)view;
-(id)init;
@end
