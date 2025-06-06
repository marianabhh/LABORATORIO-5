#include <stdio.h>
#include <stdlib.h>
#include <cjson/cJSON.h>
#include "json.h"

void generar_json(const char *archivo) {
    cJSON *root = cJSON_CreateObject();

    cJSON_AddStringToObject(root, "nombre", "Mariana");
    cJSON_AddNumberToObject(root, "edad", 19);
    cJSON_AddStringToObject(root, "carrera", "Ingeniería Eléctrica");
    cJSON_AddStringToObject(root, "universidad", "UCR");

    char *json_str = cJSON_Print(root);

    FILE *fp = fopen(archivo, "w");
    if (fp) {
        fputs(json_str, fp);
        fclose(fp);
    }

    free(json_str);
    cJSON_Delete(root);
}