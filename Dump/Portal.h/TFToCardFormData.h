/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFTransferable.h"

@class TFCard, NSString;

@interface TFToCardFormData : TFTransferable {
@private
	BOOL _dataFromOut;
	NSString* _ownerName;
	NSString* _amount;
	NSString* _promotion;
	NSString* _sourceId;
	TFCard* _card;
	NSString* _noFormatCardNo;
	NSString* _bizInNo;
}
@property(retain, nonatomic) NSString* bizInNo;
@property(assign, nonatomic) BOOL dataFromOut;
@property(retain, nonatomic) NSString* noFormatCardNo;
@property(retain, nonatomic) TFCard* card;
@property(retain, nonatomic) NSString* sourceId;
@property(retain, nonatomic) NSString* promotion;
@property(retain, nonatomic) NSString* amount;
@property(retain, nonatomic) NSString* ownerName;
-(void).cxx_destruct;
-(id)init;
@end
