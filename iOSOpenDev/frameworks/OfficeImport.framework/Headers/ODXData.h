/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ODXData.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface ODXData : XXUnknownSuperclass {
}
+ (void)readNode:(xmlNode *)node toDiagram:(id)diagram state:(id)state;	// 0x1c8825
+ (id)readModelIdentifierFromNode:(xmlNode *)node attributeName:(const char *)name;	// 0x1c9511
@end

@interface ODXData (Private)
+ (id)readPointListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x1c8975
+ (id)readPointFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x1c8a75
+ (int)readPointTypeFromNode:(xmlNode *)node;	// 0x1c8ecd
+ (void)readConnectionListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x1c98d1
+ (void)readConnectionFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x1c997d
+ (int)readConnectionTypeFromNode:(xmlNode *)node;	// 0x1c9e51
+ (void)associatePresentationsInIdMap:(id)idMap;	// 0x1ca381
@end