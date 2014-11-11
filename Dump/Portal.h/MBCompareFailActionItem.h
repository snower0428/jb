/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;
@protocol MBCompareFailActionItemDelegate;

@interface MBCompareFailActionItem : XXUnknownSuperclass {
@private
	NSString* _code;
	id<MBCompareFailActionItemDelegate> _delegate;
	NSDictionary* _params;
}
@property(retain, nonatomic) NSDictionary* params;
@property(assign, nonatomic) __weak id<MBCompareFailActionItemDelegate> delegate;
@property(retain, nonatomic) NSString* code;
@property(readonly, assign, nonatomic) NSString* title;
+(Class)itemClassWithType:(id)type;
+(id)itemWithParams:(id)params Code:(id)code;
+(id)errorWithCode:(int)code;
-(void).cxx_destruct;
-(void)performAction;
-(void)notifyCompareFailActionItem:(id)item didFailAction:(id)action;
-(void)notifyCompareFailActionItem:(id)item didFinishAction:(id)action;
@end
