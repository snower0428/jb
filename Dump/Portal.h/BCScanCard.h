/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BCScanCardDelegate;

@interface BCScanCard : XXUnknownSuperclass {
@private
	id<BCScanCardDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<BCScanCardDelegate> delegate;
-(void).cxx_destruct;
-(void)getCardInfoRsp:(id)rsp;
-(void)queryScanRsp:(id)rsp;
-(void)getCardInfo:(id)info;
-(void)queryScanSupport;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end
