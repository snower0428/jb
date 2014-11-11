/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface GTMBase64 : XXUnknownSuperclass {
}
+(id)webSafeDecodeString:(id)string;
+(id)stringByWebSafeEncodingBytes:(const void*)bytes length:(unsigned)length padded:(BOOL)padded;
+(id)stringByWebSafeEncodingData:(id)data padded:(BOOL)padded;
+(id)webSafeDecodeBytes:(const void*)bytes length:(unsigned)length;
+(id)webSafeEncodeBytes:(const void*)bytes length:(unsigned)length padded:(BOOL)padded;
+(id)webSafeDecodeData:(id)data;
+(id)webSafeEncodeData:(id)data padded:(BOOL)padded;
+(id)decodeString:(id)string;
+(id)stringByEncodingBytes:(const void*)bytes length:(unsigned)length;
+(id)stringByEncodingData:(id)data;
+(id)decodeBytes:(const void*)bytes length:(unsigned)length;
+(id)encodeBytes:(const void*)bytes length:(unsigned)length;
+(id)decodeData:(id)data;
+(id)encodeData:(id)data;
+(unsigned)baseDecode:(const char*)decode srcLen:(unsigned)len destBytes:(char*)bytes destLen:(unsigned)len4 charset:(const char*)charset requirePadding:(BOOL)padding;
+(unsigned)baseEncode:(const char*)encode srcLen:(unsigned)len destBytes:(char*)bytes destLen:(unsigned)len4 charset:(const char*)charset padded:(BOOL)padded;
+(id)baseDecode:(const void*)decode length:(unsigned)length charset:(const char*)charset requirePadding:(BOOL)padding;
+(id)baseEncode:(const void*)encode length:(unsigned)length charset:(const char*)charset padded:(BOOL)padded;
@end

