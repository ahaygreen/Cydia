/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHPChangeDirection.h>
#import <OfficeImport/EDProcessor.h>


__attribute__((visibility("hidden")))
@interface CHPChangeDirection : EDProcessor {
}
- (bool)isObjectSupported:(id)supported;	// 0x16fbd9
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x1eb4c9
- (void)changeChartDirection:(id)direction sheet:(id)sheet;	// 0x1eb4d9
@end

@interface CHPChangeDirection (Private)
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x1eb7fd
- (id)getSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x1eb79d
- (void)mapSeriesCollection:(id)collection from:(id)from forChart:(id)chart;	// 0x1ebef1
- (void)mapSeriesValues:(id)values to:(id)to forIndex:(unsigned)index byRow:(bool)row forChart:(id)chart;	// 0x1ec415
- (id)getGraphicPropertiesForSeriesWithIndex:(int)index fromCollection:(id)collection isVaryColors:(bool)colors forChart:(id)chart;	// 0x1ebcb1
- (void)addDataValue:(id)value to:(id)to withIndex:(int)index;	// 0x1ec3d9
- (void)cleanUpOldSeriesCollection:(id)collection;	// 0x1ecd6d
@end