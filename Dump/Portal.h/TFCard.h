/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFTransferable.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "Portal-Structs.h"

@class NSString;

@interface TFCard : TFTransferable <NSCoding, NSCopying> {
@private
	BOOL _cardNoHidden;
	NSString* _bankName;
	NSString* _bankShortName;
	NSString* _cardIndex;
	NSString* _cardNo;
	NSString* _cardLastNo;
	int _sourceChannel;
	NSString* _sourceChannelString;
	NSString* _bankSpeed;
	NSString* _holderName;
}
@property(retain, nonatomic) NSString* holderName;
@property(retain, nonatomic) NSString* bankSpeed;
@property(retain, nonatomic) NSString* sourceChannelString;
@property(assign, nonatomic) int sourceChannel;
@property(assign, nonatomic) BOOL cardNoHidden;
@property(retain, nonatomic) NSString* cardLastNo;
@property(retain, nonatomic) NSString* cardNo;
@property(retain, nonatomic) NSString* cardIndex;
@property(retain, nonatomic) NSString* bankShortName;
@property(retain, nonatomic) NSString* bankName;
+(id)cardWithOptions:(id)options;
+(int)sourceChannel:(id)channel;
+(id)cardWithTransferRecordVO:(id)transferRecordVO;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithCardVO:(id)cardVO;
@end
