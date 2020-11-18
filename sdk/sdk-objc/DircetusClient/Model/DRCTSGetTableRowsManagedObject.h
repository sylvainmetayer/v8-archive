#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

/**
* directus.io
* API for directus.io
*
* OpenAPI spec version: 1.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DRCTSGetTableRowsDataManagedObject.h"
#import "DRCTSGetTableRowsMetaManagedObject.h"


NS_ASSUME_NONNULL_BEGIN

@interface DRCTSGetTableRowsManagedObject : NSManagedObject


@property (nullable, nonatomic, retain) DRCTSGetTableRowsMetaManagedObject* meta;

@property (nullable, nonatomic, retain) NSOrderedSet<DRCTSGetTableRowsDataManagedObject*>* data;
@end

@interface DRCTSGetTableRowsManagedObject (GeneratedAccessors)
- (void)addDataObject:(DRCTSGetTableRowsDataManagedObject *)value;
- (void)removeDataObject:(DRCTSGetTableRowsDataManagedObject *)value;
- (void)addData:(NSOrderedSet<DRCTSGetTableRowsDataManagedObject*> *)values;
- (void)removeData:(NSOrderedSet<DRCTSGetTableRowsDataManagedObject*> *)values;

@end


NS_ASSUME_NONNULL_END