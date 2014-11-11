/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFHomeRecord.h"

@class TFAccount, NSString;

@interface TFHomeAccountRecord : TFHomeRecord {
@private
	TFAccount* _account;
	NSString* _iconURL;
}
@property(retain, nonatomic) NSString* iconURL;
@property(retain, nonatomic) TFAccount* account;
+(id)recordWithTransferRecordVOReadFlag:(id)transferRecordVOReadFlag;
+(id)recordWithTransferRecordVO:(id)transferRecordVO;
-(void).cxx_destruct;
-(id)subTitle;
-(id)title;
-(id)cellIdentifier;
-(Class)cellClass;
@end
