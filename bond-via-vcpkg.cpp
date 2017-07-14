#include <SDKDDKVer.h>
#include <stdio.h>

#include <bond/core/bond_types.h>
#include <bond/core/bond_apply.h>
#include <bond/core/runtime_schema.h>
#include <bond/core/schema.h>

int main()
{
    const bond::SchemaDef& schema = bond::GetRuntimeSchema<bond::SchemaDef>().GetSchema();
    printf(
        "SchemaDef struct qualified name: %s\n",
        schema.structs[schema.root.struct_def].metadata.qualified_name.c_str());

    return 0;
}
