//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSAlgrithm : NSObject
{
}

+ (id)cryptorValueFromData:(id)arg1 withOperation:(unsigned int)arg2 options:(unsigned int)arg3 key:(id)arg4 initializationVector:(id)arg5;
+ (id)cryptorValueFrom:(id)arg1 withOperation:(id)arg2 key:(id)arg3 initializationVector:(id)arg4;
+ (id)hashString:(id)arg1 withAlgrithm:(id)arg2;
+ (id)decryptString:(id)arg1;
+ (id)encryptString:(id)arg1;
+ (id)makeSignatureWithPayload:(id)arg1;

@end
