/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DamnVulnerableIOSApp-Structs.h"


@interface PFInternalUtils : XXUnknownSuperclass {
}
+(void)_appendNullToString:(id)string;
+(void)_appendNumber:(id)number toString:(id)string;
+(void)_appendArray:(id)array toString:(id)string;
+(void)_appendDictionary:(id)dictionary toString:(id)string;
+(void)_appendObject:(id)object toString:(id)string;
+(id)cacheKeyForObject:(id)object;
+(id)createUUID;
+(dispatch_queue_s*)backgroundQueue;
+(id)addNumber:(id)number withNumber:(id)number2;
+(id)cacheDir:(id)dir;
+(void)deleteFromKeychain:(id)keychain;
+(id)loadFromKeychain:(id)keychain;
+(void)saveToKeychain:(id)keychain data:(id)data;
+(id)getKeychainQuery:(id)query;
+(id)serializeToJSON:(id)json;
+(id)encodeObject:(id)object allowUnsaved:(BOOL)unsaved allowObjects:(BOOL)objects;
+(id)parseJSON:(id)json;
+(id)decodeObject:(id)object;
+(id)decodeArray:(id)array;
+(id)decodeDictionary:(id)dictionary;
+(BOOL)isContainerClass:(id)aClass;
+(void)assertValidClassForOrdering:(id)ordering;
+(void)assertValidClassForQuery:(id)query;
+(void)assertValidClassForValue:(id)value;
+(id)preciseDateFromString:(id)string;
+(id)stringFromPreciseDate:(id)preciseDate;
+(id)impreciseDateFromString:(id)string;
+(id)stringFromImpreciseDate:(id)impreciseDate;
+(void)clearInstallationId;
+(void)clearCachedInstallationId;
+(id)installationId;
+(BOOL)skipBackupOnPath:(id)path;
+(void)checkCacheApplicationId;
+(void)deleteDirectoryContents:(id)contents;
+(id)dataFilePath:(id)path;
+(id)parsePrivateDir;
+(id)parseDeprecatedDir;
+(id)errorFromResult:(id)result shouldLog:(BOOL)log;
+(id)errorFromResult:(id)result;
+(id)errorWithCode:(int)code message:(id)message shouldLog:(BOOL)log;
+(id)errorWithCode:(int)code message:(id)message;
+(id)calculateMD5:(id)a5;
+(void)setParseServer:(id)server;
+(id)httpClient;
+(void)initialize;
+(BOOL)isNetworkAvailable:(unsigned)available;
+(BOOL)isParseReachable;
+(id)shadowColor;
+(id)imageNamed:(id)named;
+(BOOL)isRetina;
@end
