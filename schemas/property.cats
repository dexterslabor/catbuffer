import "transaction.cats"

struct PropertyModification
	modificationType = PropertyModificationType

struct PropertyTransactionBody
	inline Transaction
	propertyType = uint8

struct AddressPropertyModification
	inline PropertyModification
	value = Address

struct MosaicPropertyModification
	inline PropertyModification
	value = MosaicId

struct TransactionTypePropertyModification
	inline PropertyModification
	value = EntityType

struct AddressPropertyTransaction
	modificationsCount = uint8
	modifications = array(AddressPropertyModification, modificationsCount)

	inline PropertyTransactionBody

struct MosaicPropertyTransaction
	modificationsCount = uint8
	modifications = array(MosaicPropertyModification, modificationsCount)

	inline PropertyTransactionBody

struct TransactionTypePropertyTransaction
	modificationsCount = uint8
	modifications = array(TransactionTypePropertyModification, modificationsCount)

	inline PropertyTransactionBody
