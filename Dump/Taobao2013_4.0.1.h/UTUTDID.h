//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIPasteboard, UTUTDIDHelper;

@interface UTUTDID : NSObject
{
    NSString *mDomainKey;
    UIPasteboard *mUIPasteBoard;
    NSString *mUtdidKey;
    NSString *mCFUUID;
    NSString *mPrivateKey;
    NSString *mFilePath;
    UTUTDIDHelper *mUtdidHelper;
    _Bool mIsInit;
}

+ (id)generateUtdid;
+ (id)uniqueGlobalDeviceIdentifier;
- (void).cxx_destruct;
- (id)value;
- (void)saveUtdid:(id)arg1;
- (id)dePackUtdid:(id)arg1;
- (id)preReadUTDID;
- (id)checkAndSave:(id)arg1;
- (void)syncUtdid;
- (_Bool)isUtdidValid:(id)arg1;
- (id)generateUtdidAndSave;
- (void)preInit;

@end

